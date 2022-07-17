//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HAPAccessoryInfo : HMFObject
{
    _Bool _authenticated;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_modelName;	// 24 = 0x18
    NSString *_manufacturer;	// 32 = 0x20
    NSNumber *_category;	// 40 = 0x28
    NSString *_certificationStatus;	// 48 = 0x30
    NSString *_denylisted;	// 56 = 0x38
    NSString *_ppid;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c4150
@property(readonly, nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) NSString *ppid; // @synthesize ppid=_ppid;
@property(readonly, nonatomic) NSString *denylisted; // @synthesize denylisted=_denylisted;
@property(readonly, nonatomic) NSString *certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000000001c3f73
- (_Bool)isDenylisted;	// IMP=0x00000000001c3efb
- (_Bool)isCertified;	// IMP=0x00000000001c3e83
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 denylisted:(id)arg6 ppid:(id)arg7;	// IMP=0x00000000001c3c57

@end
