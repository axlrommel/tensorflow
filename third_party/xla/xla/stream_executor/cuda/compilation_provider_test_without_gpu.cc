/* Copyright 2024 The OpenXLA Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include <gtest/gtest.h>
#include "xla/stream_executor/cuda/compilation_provider_test.h"

namespace stream_executor::cuda {
namespace {

INSTANTIATE_TEST_SUITE_P(CompilationProviderTest, CompilationProviderTest,
                         testing::Values(kSubprocessCompilationProviderName,
                                         kNvJitLinkCompilationProviderName,
                                         kNvptxcompilerCompilationProviderName),
                         CompilationProviderTestParamNamePrinter());

}
}  // namespace stream_executor::cuda
