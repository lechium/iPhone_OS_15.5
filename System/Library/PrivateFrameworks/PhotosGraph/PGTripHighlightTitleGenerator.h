//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PGEventEnrichment;

@interface PGTripHighlightTitleGenerator
{
    id <PGEventEnrichment> _collection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000050da49
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (_Bool)_useSplitTimeTitlesIfNeeded;	// IMP=0x000000000050da30
- (id)_locationTitle;	// IMP=0x000000000050d8b5
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x000000000050d736
- (id)initWithCollection:(id)arg1 titleGenerationContext:(id)arg2;	// IMP=0x000000000050d654

@end
