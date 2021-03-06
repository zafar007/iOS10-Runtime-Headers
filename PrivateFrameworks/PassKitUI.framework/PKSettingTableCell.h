/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSettingTableCell : PKTableViewCell {
    SEL  _action;
    UISwitch * _settingSwitch;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, retain) UISwitch *settingSwitch;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (SEL)action;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setOn:(bool)arg1;
- (void)setSettingSwitch:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)settingSwitch;
- (id)target;

@end
