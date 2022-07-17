//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface PGGraphMusicTrackNode
{
    NSString *_title;	// 8 = 0x8
    double _durationInSeconds;	// 16 = 0x10
}

+ (id)musicTrackTitleSortDescriptors;	// IMP=0x000000000016fe4f
- (void).cxx_destruct;	// IMP=0x000000000016fdf1
@property(readonly) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000016fa37
@property(readonly, nonatomic) NSSet *artistNodes;
@property(readonly, nonatomic) NSSet *genreNodes;
@property(readonly, nonatomic) NSSet *albumNodes;
- (void)enumerateArtistNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f83f
- (void)enumerateGenreNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f81e
- (void)enumerateAlbumNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f7fd
- (unsigned short)domain;	// IMP=0x000000000016f7f2
- (id)label;	// IMP=0x000000000016f7d3
- (id)propertyDictionary;	// IMP=0x000000000016f6fb
- (_Bool)hasProperties:(id)arg1;	// IMP=0x000000000016f5f7
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000016f53c
- (id)initWithTitle:(id)arg1 durationInSeconds:(double)arg2;	// IMP=0x000000000016f4b8

@end
