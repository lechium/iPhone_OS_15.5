//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SACalendar;

@interface SAMPReleaseInfo <SAAceSerializable>
{
}

+ (id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e4c9
+ (id)releaseInfo;	// IMP=0x000000000003e4b7
@property(nonatomic) long long releaseYear;
@property(retain, nonatomic) SACalendar *releaseDate;
- (id)encodedClassName;	// IMP=0x000000000003e4aa
- (id)groupIdentifier;	// IMP=0x000000000003e496

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

