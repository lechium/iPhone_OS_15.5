//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface NSDate (WFNaming) <WFNaming, WFPropertyListObject, WFSerializableContent>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x000000000005d535
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;	// IMP=0x000000000005d4c6
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(_Bool)arg5 timeZone:(id)arg6 locale:(id)arg7;	// IMP=0x0000000000063c2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

