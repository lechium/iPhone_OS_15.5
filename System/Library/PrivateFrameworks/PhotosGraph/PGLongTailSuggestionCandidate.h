//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset;

@interface PGLongTailSuggestionCandidate : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    unsigned long long _score;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002dcb6f
@property(readonly, nonatomic) unsigned long long score; // @synthesize score=_score;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (_Bool)isValidWithMeNodeLocalIdentifier:(id)arg1;	// IMP=0x00000000002dc9d3
- (id)initWithAsset:(id)arg1 score:(unsigned long long)arg2;	// IMP=0x00000000002dc95d

@end

