//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCUIStatusUpdate : NSObject
{
    NSString *_message;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000001db30
- (void).cxx_destruct;	// IMP=0x000000000001dc1a
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000001db88

@end

