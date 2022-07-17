//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMVisionFeature, NSMutableArray;

@interface AXMMLElementGroup : NSObject
{
    _Bool _topLevel;	// 8 = 0x8
    _Bool _includeChildren;	// 9 = 0x9
    AXMVisionFeature *_feature;	// 16 = 0x10
    NSMutableArray *_subfeatures;	// 24 = 0x18
    double _confidence;	// 32 = 0x20
    struct CGRect _frame;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005e93c
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) _Bool includeChildren; // @synthesize includeChildren=_includeChildren;
@property(nonatomic) _Bool topLevel; // @synthesize topLevel=_topLevel;
@property(retain, nonatomic) NSMutableArray *subfeatures; // @synthesize subfeatures=_subfeatures;
@property(retain, nonatomic) AXMVisionFeature *feature; // @synthesize feature=_feature;
- (id)childFeatures;	// IMP=0x000000000005e832
- (id)textLabel;	// IMP=0x000000000005e3ca
- (id)featureLabel;	// IMP=0x000000000005e275
- (id)description;	// IMP=0x000000000005e1ab
- (id)init;	// IMP=0x000000000005e0df

@end
