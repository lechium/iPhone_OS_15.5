//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface SOSAccountStatus : NSObject
{
    int _status;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000038b85
@property(retain) NSError *error; // @synthesize error=_error;
@property int status; // @synthesize status=_status;
- (id)description;	// IMP=0x0010000000038ac8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003895b
- (id)init:(int)arg1 error:(id)arg2;	// IMP=0x00100000000388e5

@end
