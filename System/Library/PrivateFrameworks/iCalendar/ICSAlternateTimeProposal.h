//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSDateTimeValue;

@interface ICSAlternateTimeProposal
{
}

+ (id)_parseICSString:(id)arg1;	// IMP=0x0000000000028b0b
+ (id)alternateTimeProposalFromICSCString:(id)arg1;	// IMP=0x00000000000289d5
+ (int)statusFromICSString:(id)arg1;	// IMP=0x0000000000028844
+ (id)ICSStringFromAlternateTimeProposalStatus:(int)arg1;	// IMP=0x0000000000028812
@property(nonatomic) int status;
@property(retain, nonatomic) ICSDateTimeValue *startDate;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;	// IMP=0x000000000001d322

@end

