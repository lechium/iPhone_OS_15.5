//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

@interface SGMISaliencyModelFeatureProvider : NSObject <MLFeatureProvider>
{
    MLMultiArray *_data;	// 8 = 0x8
    NSSet *_featureNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000131b70
@property(retain, nonatomic) NSSet *featureNames; // @synthesize featureNames=_featureNames;
@property(retain, nonatomic) MLMultiArray *data; // @synthesize data=_data;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000131aea
- (id)initWithData:(id)arg1;	// IMP=0x0000000000131a33

@end

