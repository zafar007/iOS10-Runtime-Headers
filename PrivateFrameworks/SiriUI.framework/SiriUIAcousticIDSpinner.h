/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAcousticIDSpinner : UIView {
    <SiriUIAcousticIDSpinnerDelegate> * _delegate;
    UIImageView * _musicNoteView;
    UIImageView * _spinnerView;
    UIVisualEffectView * _vibrancyView;
}

@property (nonatomic) <SiriUIAcousticIDSpinnerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (void)animateIn;
- (void)animateOut;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowing;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end