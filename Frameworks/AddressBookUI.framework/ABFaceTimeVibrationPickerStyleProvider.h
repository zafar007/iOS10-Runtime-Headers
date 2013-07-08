/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIFont;

@interface ABFaceTimeVibrationPickerStyleProvider : NSObject <TKVibrationPickerStyleProvider> {
    UIFont *_vibrationPickerCellTextFont;
    UIColor *_vibrationPickerCellHighlightedTextColor;
    UIFont *_vibrationPickerHeaderTextFont;
    UIColor *_vibrationPickerHeaderTextShadowColor;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _vibrationPickerHeaderTextShadowOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _vibrationPickerHeaderTextPaddingInsets;
}

@property(readonly) UIFont * vibrationPickerCellTextFont;
@property(readonly) UIColor * vibrationPickerCellHighlightedTextColor;
@property(readonly) UIFont * vibrationPickerHeaderTextFont;
@property(readonly) UIColor * vibrationPickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } vibrationPickerHeaderTextShadowOffset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } vibrationPickerHeaderTextPaddingInsets;
@property(readonly) BOOL vibrationPickerUsesOpaqueBackground;
@property(readonly) int vibrationPickerTableViewSeparatorStyle;
@property(readonly) UIColor * vibrationPickerCellTextColor;
@property(readonly) UIColor * vibrationPickerCellBackgroundColor;
@property(readonly) BOOL wantsCustomVibrationPickerHeaderView;
@property(readonly) UIColor * vibrationPickerHeaderTextColor;


- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationPickerHeaderTextPaddingInsets;
- (struct UIOffset { float x1; float x2; })vibrationPickerHeaderTextShadowOffset;
- (id)vibrationPickerHeaderTextShadowColor;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextFont;
- (BOOL)wantsCustomVibrationPickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
- (id)vibrationPickerCellBackgroundColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellTextFont;
- (int)vibrationPickerTableViewSeparatorStyle;
- (BOOL)vibrationPickerUsesOpaqueBackground;

@end