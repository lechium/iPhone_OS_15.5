//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSgPTPTime : NSObject <NSCopying>
{
    _Bool _ptpTimescale;	// 8 = 0x8
    _Bool _timeTraceable;	// 9 = 0x9
    _Bool _frequencyTraceable;	// 10 = 0xa
    unsigned short _localPortNumber;	// 12 = 0xc
    unsigned long long _nanosecondsSinceEpoch;	// 16 = 0x10
    unsigned long long _grandmasterIdentity;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isFrequencyTraceable) _Bool frequencyTraceable; // @synthesize frequencyTraceable=_frequencyTraceable;
@property(readonly, nonatomic, getter=isTimeTraceable) _Bool timeTraceable; // @synthesize timeTraceable=_timeTraceable;
@property(readonly, nonatomic, getter=isPTPTimescale) _Bool ptpTimescale; // @synthesize ptpTimescale=_ptpTimescale;
@property(readonly, nonatomic) unsigned short localPortNumber; // @synthesize localPortNumber=_localPortNumber;
@property(readonly, nonatomic) unsigned long long grandmasterIdentity; // @synthesize grandmasterIdentity=_grandmasterIdentity;
@property(readonly, nonatomic) unsigned long long nanosecondsSinceEpoch; // @synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch;
- (id)description;	// IMP=0x000000000003470b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003466a
- (unsigned long long)hash;	// IMP=0x0000000000034660
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000345f2
@property(readonly, nonatomic) unsigned int nanoseconds; // @dynamic nanoseconds;
@property(readonly, nonatomic) unsigned long long seconds; // @dynamic seconds;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 onGrandmaster:(unsigned long long)arg2 withLocalPortNumber:(unsigned short)arg3 ptpTimescale:(_Bool)arg4 timeTraceable:(_Bool)arg5 frequencyTraceable:(_Bool)arg6;	// IMP=0x0000000000034539
- (id)initWithSeconds:(unsigned long long)arg1 nanoseconds:(unsigned int)arg2 onGrandmaster:(unsigned long long)arg3 withLocalPortNumber:(unsigned short)arg4 ptpTimescale:(_Bool)arg5 timeTraceable:(_Bool)arg6 frequencyTraceable:(_Bool)arg7;	// IMP=0x00000000000344f6
- (id)init;	// IMP=0x00000000000344ba

@end
