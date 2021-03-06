//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSCache;

@interface PXSharedAlbumContactMatcher : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSCache *_avatarRendererByContactImageDiameter;	// 16 = 0x10
    NSCache *_contactIdentifiersBySubscriberIdentifiers;	// 24 = 0x18
    NSCache *_contactPhotosCache;	// 32 = 0x20
}

+ (id)sharedMatcher;	// IMP=0x00000000003676a2
- (void).cxx_destruct;	// IMP=0x00000000003674b4
- (void)contactsDidChange:(id)arg1;	// IMP=0x0000000000367479
- (id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000036745c
- (id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000036730e
- (id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000036721c
- (void)requestContactPhotoForContact:(id)arg1 diameter:(double)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000366ecc
- (id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000366841
- (void)_observeContactStoreNotifications;	// IMP=0x00000000003666ef
- (id)init;	// IMP=0x00000000003665ea

@end

