//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysisServices/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface MADRequest : NSObject <NSSecureCoding>
{
    NSArray *_results;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001933
- (void).cxx_destruct;	// IMP=0x0000000000001c81
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)description;	// IMP=0x0000000000001b94
- (void)setError:(id)arg1;	// IMP=0x0000000000001b83
- (void)setResults:(id)arg1;	// IMP=0x0000000000001b72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001afd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000193b

@end
