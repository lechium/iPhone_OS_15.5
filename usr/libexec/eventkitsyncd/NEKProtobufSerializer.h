//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEKProtobufSerializer : NSObject
{
}

+ (void)oops;	// IMP=0x0020000000056022
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;	// IMP=0x002000000005686a
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;	// IMP=0x0010000000056858
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000005640c
- (id)dataFromChange:(id)arg1;	// IMP=0x0010000000056058

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
