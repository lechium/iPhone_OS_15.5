//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BRLTTokenRange : NSObject
{
    long long _token;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

@property(nonatomic) long long token; // @synthesize token=_token;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)initWithRange:(struct _NSRange)arg1 token:(long long)arg2;	// IMP=0x00000000000094b4

@end
