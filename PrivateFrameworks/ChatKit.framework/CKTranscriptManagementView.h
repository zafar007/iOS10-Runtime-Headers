/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptManagementView : UIView {
    UIView * _attachmentsCollectionView;
    float  _bottomPadding;
    UIView * _mapView;
    UIView * _nameField;
    float  _navigationBarTopInset;
    float  _scrollYOffset;
    BOOL  _suppressMapMovement;
}

@property (nonatomic, retain) UIView *attachmentsCollectionView;
@property (nonatomic) float bottomPadding;
@property (nonatomic, retain) UIView *mapView;
@property (nonatomic, retain) UIView *nameField;
@property (nonatomic) float navigationBarTopInset;
@property (nonatomic) float scrollYOffset;
@property (nonatomic) BOOL suppressMapMovement;

- (id)attachmentsCollectionView;
- (float)bottomPadding;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (BOOL)layoutMarginsFollowReadableWidth;
- (void)layoutSubviews;
- (id)mapView;
- (id)nameField;
- (float)navigationBarTopInset;
- (float)scrollYOffset;
- (void)setAttachmentsCollectionView:(id)arg1;
- (void)setBottomPadding:(float)arg1;
- (void)setMapView:(id)arg1;
- (void)setNameField:(id)arg1;
- (void)setNavigationBarTopInset:(float)arg1;
- (void)setScrollYOffset:(float)arg1;
- (void)setSuppressMapMovement:(BOOL)arg1;
- (BOOL)suppressMapMovement;

@end