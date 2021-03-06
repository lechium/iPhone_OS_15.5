//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSCopying;

@interface STResult : NSObject
{
    long long _type;	// 8 = 0x8
    NSObject<NSCopying> *_value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)failure:(id)arg1;	// IMP=0x00200000000804a9
+ (id)success;	// IMP=0x0010000000080441
+ (id)success:(id)arg1;	// IMP=0x00100000000803b2
- (void).cxx_destruct;	// IMP=0x0020000000080f03
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(readonly) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0010000000080e36
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x0010000000080bcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000080b69
- (id)flatMapError:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080a15
- (id)mapError:(CDUnknownBlockType)arg1;	// IMP=0x001000000008093a
- (id)flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000807ec
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080711
- (void)evaluateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x001000000008065b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008060a
- (id)description;	// IMP=0x00100000000804fa
- (id)_initWithSuccessValue:(id)arg1 failureError:(id)arg2 type:(long long)arg3;	// IMP=0x0010000000080314

@end

