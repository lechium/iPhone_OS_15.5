//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface CKResult : NSObject
{
    id _successValue;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000044ee2
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id successValue; // @synthesize successValue=_successValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000044ca2
- (unsigned long long)hash;	// IMP=0x0000000000044c15
- (id)initWithFailure:(id)arg1;	// IMP=0x0000000000044baa
- (id)initWithSuccess:(id)arg1;	// IMP=0x0000000000044b3f

@end

