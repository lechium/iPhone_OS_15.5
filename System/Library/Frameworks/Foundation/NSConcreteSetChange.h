//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange
{
    unsigned long long _changeType;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (id)value;	// IMP=0x0000000000149caa
- (unsigned long long)changeType;	// IMP=0x0000000000149c99
- (void)dealloc;	// IMP=0x0000000000149c34
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;	// IMP=0x0000000000149ba8

@end
