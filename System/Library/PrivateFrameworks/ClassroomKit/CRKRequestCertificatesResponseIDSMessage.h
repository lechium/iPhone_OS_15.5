//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSMessage-Protocol.h>

@class NSArray, NSDictionary, NSError, NSUUID;

@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage>
{
    NSUUID *_requestIdentifier;	// 8 = 0x8
    NSArray *_certificateDataCollection;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x0000000000061bef
- (void).cxx_destruct;	// IMP=0x0000000000061e65
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *certificateDataCollection; // @synthesize certificateDataCollection=_certificateDataCollection;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithRequestIdentifier:(id)arg1 certificateDataCollection:(id)arg2 error:(id)arg3;	// IMP=0x0000000000061966

@end
