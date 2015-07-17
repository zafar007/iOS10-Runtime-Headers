/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetCacheManager : NSObject {
    NSString * _clientIdentifier;
}

- (void).cxx_destruct;
- (id)assetFileName:(id)arg1;
- (id)assetFileURL:(id)arg1;
- (id)assetsDirectoryURL;
- (id)cacheRoot;
- (id)currentManifestFileURL;
- (id)initWithClientIdentifier:(id)arg1;
- (id)loadCurrentCachedManifest;
- (id)manifestFileName:(id)arg1;
- (id)manifestFileURL:(id)arg1;
- (id)manifestsDirectoryURL;
- (BOOL)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id*)arg2;
- (id)validatePath:(id)arg1;

@end