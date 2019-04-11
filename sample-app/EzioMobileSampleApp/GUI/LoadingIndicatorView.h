//  MIT License
//
//  Copyright (c) 2019 Thales DIS
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

// IMPORTANT: This source code is intended to serve training information purposes only. Please make sure to review our IdCloud documentation, including security guidelines.

/**
 Loading overly
 */
@interface LoadingIndicatorView : UIView

/**
 Whenever is overlay visible or not.
 */
@property (nonatomic, readonly) BOOL isPresent;

/**
 Show or hide loading overlay. Same operation is ignored.

 @param show Whenever we want to show or hide overlay
 @param animated Whenever should be transition animated
 */
- (void)loadingBarShow:(BOOL)show animated:(BOOL)animated;

/**
 Set overlay caption. It can be called anytime.

 @param caption Caption to display
 */
- (void)setCaption:(NSString *)caption;

@end