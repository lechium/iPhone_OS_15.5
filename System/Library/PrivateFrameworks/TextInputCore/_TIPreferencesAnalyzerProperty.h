//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TIPreferencesAnalyzerProperty : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    id _defaultValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000181033
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0000000000180f2b

@end
