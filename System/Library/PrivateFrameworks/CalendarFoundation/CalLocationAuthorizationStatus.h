//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CalLocationAuthorizationStatus : NSObject
{
    int _status;	// 8 = 0x8
    unsigned long long _precision;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (id)initWithStatus:(int)arg1 precision:(unsigned long long)arg2;	// IMP=0x0000000000013d5c

@end
