//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PLCloudFeedCommentsEntry
{
}

+ (id)entityName;	// IMP=0x00000000004a63d3
- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;	// IMP=0x00000000004a6321
@property(readonly, nonatomic) __weak NSMutableOrderedSet *mutableEntryComments;
@property(readonly, nonatomic) __weak NSMutableOrderedSet *mutableEntryLikeComments;

// Remaining properties
@property(retain, nonatomic) NSString *entryCloudAssetGUID; // @dynamic entryCloudAssetGUID;
@property(retain, nonatomic) NSOrderedSet *entryComments; // @dynamic entryComments;
@property(retain, nonatomic) NSOrderedSet *entryLikeComments; // @dynamic entryLikeComments;

@end

