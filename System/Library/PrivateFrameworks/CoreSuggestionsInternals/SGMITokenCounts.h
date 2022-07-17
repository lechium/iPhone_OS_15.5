//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SGMITokenCounts : NSObject
{
    NSNumber *_salientCount;	// 8 = 0x8
    NSNumber *_regularCount;	// 16 = 0x10
    NSString *_token;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022ce66
@property(readonly) NSString *token; // @synthesize token=_token;
@property(readonly) NSNumber *regularCount; // @synthesize regularCount=_regularCount;
@property(readonly) NSNumber *salientCount; // @synthesize salientCount=_salientCount;
- (id)description;	// IMP=0x000000000022cde2
- (id)newByAdding:(id)arg1 asSalient:(_Bool)arg2;	// IMP=0x000000000022cc4b
- (id)initWithCount:(id)arg1 asSalient:(_Bool)arg2 token:(id)arg3;	// IMP=0x000000000022cc1f
- (id)init;	// IMP=0x000000000022cbfc
- (id)initWithSalientCount:(id)arg1 regularCount:(id)arg2 token:(id)arg3;	// IMP=0x000000000022cb45

@end
