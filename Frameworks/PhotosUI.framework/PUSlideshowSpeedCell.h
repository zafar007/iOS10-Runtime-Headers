/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSpeedCell : UITableViewCell {
    <PUSlideshowSpeedCellDelegate> * _delegate;
    UIImageView * _fasterGlyphImageView;
    UISlider * _slider;
    UIImageView * _slowerGlyphImageView;
    NSArray * _speedConstraints;
}

@property (nonatomic) <PUSlideshowSpeedCellDelegate> *delegate;
@property (nonatomic) double stepDuration;

- (void).cxx_destruct;
- (void)_stepDurationValueChanged:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStepDuration:(double)arg1;
- (double)stepDuration;
- (void)updateConstraints;

@end