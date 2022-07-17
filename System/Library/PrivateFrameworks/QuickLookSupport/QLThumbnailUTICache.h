//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject
{
    NSMutableDictionary *_itemTypeCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 16 = 0x10
    NSMutableDictionary *_dataItemTypeCache;	// 24 = 0x18
}

+ (id)_iWorkUTIs;	// IMP=0x0000000000007fe6
+ (id)sharedCache;	// IMP=0x0000000000007f03
- (void).cxx_destruct;	// IMP=0x0000000000008a19
@property(retain, nonatomic) NSMutableDictionary *dataItemTypeCache; // @synthesize dataItemTypeCache=_dataItemTypeCache;
@property(retain) NSMutableDictionary *itemTypeCache; // @synthesize itemTypeCache=_itemTypeCache;
- (_Bool)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2;	// IMP=0x00000000000088a7
- (_Bool)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2;	// IMP=0x0000000000008724
- (_Bool)_contentTypeShouldBeHandledByAppleExtension:(id)arg1;	// IMP=0x0000000000008706
- (_Bool)_contentTypeIsIWorkType:(id)arg1;	// IMP=0x0000000000008690
- (unsigned long long)itemTypeForContentType:(id)arg1 isDataItem:(_Bool)arg2;	// IMP=0x00000000000083af
- (unsigned long long)itemTypeForContentType:(id)arg1;	// IMP=0x000000000000839b
- (unsigned long long)itemTypeForItem:(id)arg1;	// IMP=0x00000000000082fc
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1 isDataItem:(_Bool)arg2;	// IMP=0x00000000000080d0
- (id)init;	// IMP=0x0000000000007f58

@end
