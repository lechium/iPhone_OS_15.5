//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AKURLRequestApprover : NSObject
{
    NSArray *_whiteListedPaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000041f30
- (_Bool)_matchInputAgainstPaths:(id)arg1;	// IMP=0x0000000000041d3b
- (_Bool)shouldAllowRequest:(id)arg1;	// IMP=0x0000000000041c03
- (id)initWithWhitelistedPaths:(id)arg1;	// IMP=0x0000000000041b90

@end

