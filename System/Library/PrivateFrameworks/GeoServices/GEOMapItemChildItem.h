//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemChildAction, GEOMapItemChildPlace, GEOPublisherResult;

@interface GEOMapItemChildItem : NSObject
{
    long long _childItemType;	// 8 = 0x8
    GEOMapItemChildPlace *_childItemPlace;	// 16 = 0x10
    GEOMapItemChildAction *_childItemAction;	// 24 = 0x18
    GEOPublisherResult *_publisherResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000011aa664
@property(readonly, nonatomic) GEOPublisherResult *publisherResult; // @synthesize publisherResult=_publisherResult;
@property(retain, nonatomic) GEOMapItemChildAction *childItemAction; // @synthesize childItemAction=_childItemAction;
@property(retain, nonatomic) GEOMapItemChildPlace *childItemPlace; // @synthesize childItemPlace=_childItemPlace;
@property(nonatomic) long long childItemType; // @synthesize childItemType=_childItemType;
- (id)initWithPublisherResult:(id)arg1;	// IMP=0x00000000011aa59d
- (id)initWithChildPlace:(id)arg1;	// IMP=0x00000000011aa513
- (id)initWithChildItem:(id)arg1;	// IMP=0x00000000011aa375

@end

