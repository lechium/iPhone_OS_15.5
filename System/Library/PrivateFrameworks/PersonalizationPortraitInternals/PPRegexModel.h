//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MLCustomModel-Protocol.h>

@class NSRegularExpression, NSString;

@interface PPRegexModel : NSObject <MLCustomModel>
{
    NSRegularExpression *_regex;	// 8 = 0x8
    NSString *_inputName;	// 16 = 0x10
    NSString *_outputName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001871ef
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000186de1
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000186cbd

@end

