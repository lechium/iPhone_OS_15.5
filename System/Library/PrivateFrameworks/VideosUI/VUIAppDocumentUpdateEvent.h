//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSDictionary, VUIAppDocumentUpdateEventDescriptor;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>
{
    VUIAppDocumentUpdateEventDescriptor *_descriptor;	// 8 = 0x8
}

+ (id)upNextLockupArtSettingChanged;	// IMP=0x00000000002d8444
+ (id)groupRecoUsersChanged;	// IMP=0x00000000002d839e
+ (id)groupRecoCollectionVisiblityChanged;	// IMP=0x00000000002d82f8
+ (id)highlightsChanged;	// IMP=0x00000000002d8252
+ (id)iamMessageReceived;	// IMP=0x00000000002d81ac
+ (id)locationRetrieved;	// IMP=0x00000000002d8106
+ (id)locationAuthorizationChanged;	// IMP=0x00000000002d8060
+ (id)appRefresh;	// IMP=0x00000000002d7fba
+ (id)clearPlayHistory;	// IMP=0x00000000002d7f14
+ (id)playHistoryUpdated;	// IMP=0x00000000002d7e6e
+ (id)appDidBecomeActive;	// IMP=0x00000000002d7dc8
+ (id)preferredVideoFormat;	// IMP=0x00000000002d7d22
+ (id)utsk;	// IMP=0x00000000002d7c7c
+ (id)restrictions;	// IMP=0x00000000002d7bd6
+ (id)entitlements;	// IMP=0x00000000002d7b30
+ (id)removeFromPlayHistory;	// IMP=0x00000000002d7a8a
+ (id)accountChanged;	// IMP=0x00000000002d79e4
+ (id)favorites;	// IMP=0x00000000002d793e
+ (id)settings;	// IMP=0x00000000002d7898
+ (id)playActivity;	// IMP=0x00000000002d77f2
+ (id)purchases;	// IMP=0x00000000002d774c
- (void).cxx_destruct;	// IMP=0x00000000002d8ae5
@property(retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)description;	// IMP=0x00000000002d8984
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d8866
- (unsigned long long)hash;	// IMP=0x00000000002d8822
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d8817
- (id)coalescedEvent:(id)arg1;	// IMP=0x00000000002d8690
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;	// IMP=0x00000000002d8559
- (id)init;	// IMP=0x00000000002d84ea

@end
