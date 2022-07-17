//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPFavoriteTransitLine-Protocol.h>

@class MSPTransitLineBookmark, NSString, NSUUID;
@protocol GEOTransitLine;

@interface MSPMutableFavoriteTransitLine <MSPFavoriteTransitLine>
{
}

+ (id)mutableObjectProtocol;	// IMP=0x000000000008fb4e
+ (Class)mutableObjectClass;	// IMP=0x000000000008fb3d
+ (id)immutableObjectProtocol;	// IMP=0x000000000008fb2c
+ (Class)immutableObjectClass;	// IMP=0x000000000008fb24
- (_Bool)isUserVisibleDuplicateOfFavorite:(id)arg1;	// IMP=0x000000000008ffd6
@property(retain, nonatomic) id <GEOTransitLine> transitLine;
@property(readonly, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;	// IMP=0x000000000008fcc3
- (id)initWithBookmarkStorage:(id)arg1;	// IMP=0x000000000008fb56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *storageIdentifier;
@property(readonly) Class superclass;

@end
