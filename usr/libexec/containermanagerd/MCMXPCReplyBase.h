//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMError, NSString;

@interface MCMXPCReplyBase : NSObject
{
    MCMError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000a426a
@property(readonly, nonatomic) MCMError *error; // @synthesize error=_error;
- (_Bool)encodeReplyOntoXPCObject:(id)arg1;	// IMP=0x00100000000a419f
- (id)initWithError:(id)arg1;	// IMP=0x00100000000a4134

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

