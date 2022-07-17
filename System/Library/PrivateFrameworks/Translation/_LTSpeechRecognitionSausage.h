//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding>
{
    NSArray *_bins;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000487e0
- (void).cxx_destruct;	// IMP=0x0000000000048976
@property(retain, nonatomic) NSArray *bins; // @synthesize bins=_bins;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004880b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000487e8
- (id)initWithRecognition:(id)arg1 wordConfidenceThreshold:(long long)arg2;	// IMP=0x0000000000047fac
- (id)initWithOspreySausage:(id)arg1 choices:(id)arg2 locale:(id)arg3;	// IMP=0x000000000004768b

@end
