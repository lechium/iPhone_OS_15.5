//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMonogrammer, NSCache, NSMutableSet, NSPersonNameComponentsFormatter, NSURLSession, UIImage;
@protocol OS_dispatch_queue;

@interface STIconCache : NSObject
{
    NSCache *_iconByKeyCache;	// 8 = 0x8
    CNMonogrammer *_monogrammer;	// 16 = 0x10
    NSPersonNameComponentsFormatter *_personNameComponentsFormatter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lookupQueue;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
    NSMutableSet *_bundleIdentifiersWithPendingRequests;	// 48 = 0x30
}

+ (id)sharedCache;	// IMP=0x000000000000b46d
- (void).cxx_destruct;	// IMP=0x000000000000eca7
@property(readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // @synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(retain, nonatomic) NSPersonNameComponentsFormatter *personNameComponentsFormatter; // @synthesize personNameComponentsFormatter=_personNameComponentsFormatter;
@property(retain, nonatomic) CNMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
- (id)monogramImageForInitial:(id)arg1 useDarkColors:(_Bool)arg2;	// IMP=0x000000000000eabc
- (id)monogramImageForNameComponents:(id)arg1;	// IMP=0x000000000000e875
- (void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e252
- (id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000df5d
- (void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000df32
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;	// IMP=0x000000000000df09
- (id)roundedImageForImageWithName:(id)arg1;	// IMP=0x000000000000dde4
- (id)_newCircleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;	// IMP=0x000000000000dbac
- (id)circleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;	// IMP=0x000000000000daa6
- (void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000d8f1
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;	// IMP=0x000000000000d75e
- (id)blankSpaceImageWithSize:(struct CGSize)arg1;	// IMP=0x000000000000d67a
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000d5b4
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000000d4e2
- (id)imageForCategoryIdentifier:(id)arg1;	// IMP=0x000000000000d14d
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;	// IMP=0x000000000000cda8
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1;	// IMP=0x000000000000cb27
- (id)imageForBundleIdentifier:(id)arg1;	// IMP=0x000000000000c56b
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000c059
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be19
- (void)imageForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b7b3
@property(readonly) UIImage *imageForBlankApplicationIcon;
- (void)dealloc;	// IMP=0x000000000000b6ea
- (id)init;	// IMP=0x000000000000b4c2

@end

