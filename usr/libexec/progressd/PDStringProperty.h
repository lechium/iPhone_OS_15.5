//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDStringProperty
{
    NSString *_value;	// 16 = 0x10
}

+ (id)valueSQLType;	// IMP=0x004000000017f5c9
+ (id)entityName;	// IMP=0x001000000017f4b3
- (void).cxx_destruct;	// IMP=0x002000000017f5fb
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)bindTo:(id)arg1;	// IMP=0x001000000017f54c
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000017f4c0

@end
