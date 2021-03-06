/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache * _cache;
    <CNScheduler> * _resourceLock;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

+ (id)imageNameForDiameter:(double)arg1;

- (void).cxx_destruct;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (id)cache;
- (id)init;
- (struct CGImage { }*)renderImageForSilhouetteImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)resourceLock;

@end
