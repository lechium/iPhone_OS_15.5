//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteTrigger : NSObject
{
    Class _entityClass;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _event;	// 24 = 0x18
    NSString *_predicateString;	// 32 = 0x20
    NSString *_triggerString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000313939
@property(readonly, copy, nonatomic) NSString *triggerString; // @synthesize triggerString=_triggerString;
@property(readonly, copy, nonatomic) NSString *predicateString; // @synthesize predicateString=_predicateString;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)disambiguatedName;	// IMP=0x0000000000313843
- (id)creationSQL;	// IMP=0x00000000003136a5
- (id)description;	// IMP=0x000000000031361d
- (id)initWithEntity:(Class)arg1 name:(id)arg2 triggerEvent:(long long)arg3 predicateString:(id)arg4 triggerString:(id)arg5;	// IMP=0x0000000000313516
- (id)init;	// IMP=0x000000000031349c

@end

