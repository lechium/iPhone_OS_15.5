//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFCodingOptions;

@interface SFCoder : NSObject
{
    id _coderInternal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bf17
@property(copy, nonatomic) SFCodingOptions *options;
- (id)encodeTopLevelValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bebc
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000000be50

@end

