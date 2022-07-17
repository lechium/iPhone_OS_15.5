//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

#import <SiriCore/SiriCoreSQLiteValue-Protocol.h>

@class NSString;

@interface NSNumber (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (long long)siriCoreSQLiteValue_integerRepresentation;	// IMP=0x000000000001fcf6
- (double)siriCoreSQLiteValue_doubleRepresentation;	// IMP=0x000000000001fce4
- (long long)siriCoreSQLiteValue_type;	// IMP=0x000000000001fbb5
- (id)siriCoreSQLiteValue_toData;	// IMP=0x000000000001fb65
- (id)siriCoreSQLiteValue_toNumber;	// IMP=0x000000000001fb5c
- (id)siriCoreSQLiteValue_toString;	// IMP=0x000000000001fb4a
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;	// IMP=0x000000000001faec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
