//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject
{
    long long _storeItemID;	// 8 = 0x8
    NSDictionary *_additionalTrackMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f4286
@property(readonly, nonatomic) NSDictionary *additionalTrackMetadata; // @synthesize additionalTrackMetadata=_additionalTrackMetadata;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
- (id)storeItem;	// IMP=0x00000000001f426a
- (id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2;	// IMP=0x00000000001f41ec

@end

