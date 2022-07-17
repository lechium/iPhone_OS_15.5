//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface HMMutableReportContext
{
}

+ (id)reportContextWithDomain:(id)arg1 requestInfo:(id)arg2;	// IMP=0x000000000006d0ea
+ (id)reportContextWithDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000006d068
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006cfc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006cfab
- (id)initWithReportDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000006cf7c

// Remaining properties
@property(retain, nonatomic) NSString *reportDomain; // @dynamic reportDomain;
@property(nonatomic) double reportTimeout; // @dynamic reportTimeout;
@property(retain, nonatomic) NSData *requestInfo; // @dynamic requestInfo;

@end
