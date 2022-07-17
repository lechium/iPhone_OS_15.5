//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdCore/NSCopying-Protocol.h>

@interface ADFlags : NSObject <NSCopying>
{
    unsigned long long _flags;	// 8 = 0x8
}

+ (id)initWithFlags:(unsigned long long)arg1;	// IMP=0x0000000000016b8a
@property unsigned long long flags; // @synthesize flags=_flags;
- (_Bool)noneSet;	// IMP=0x0000000000016ceb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016ccf
- (_Bool)allSet:(unsigned long long)arg1;	// IMP=0x0000000000016cbc
- (unsigned long long)anySet:(unsigned long long)arg1;	// IMP=0x0000000000016caf
- (_Bool)isSet:(unsigned long long)arg1;	// IMP=0x0000000000016c96
- (void)reset;	// IMP=0x0000000000016c88
- (void)unset:(unsigned long long)arg1;	// IMP=0x0000000000016c7b
- (void)set:(unsigned long long)arg1;	// IMP=0x0000000000016c71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016c0e
- (id)init;	// IMP=0x0000000000016bc2

@end
