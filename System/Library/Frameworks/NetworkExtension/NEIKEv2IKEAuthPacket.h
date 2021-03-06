//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIKEv2AuthPayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload, NEIKEv2EAPPayload, NEIKEv2InitiatorIdentifierPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderIdentifierPayload, NEIKEv2ResponderTrafficSelectorPayload, NSArray;

@interface NEIKEv2IKEAuthPacket
{
    NEIKEv2ChildSAPayload *_sa;	// 88 = 0x58
    NEIKEv2InitiatorIdentifierPayload *_idi;	// 96 = 0x60
    NEIKEv2ResponderIdentifierPayload *_idr;	// 104 = 0x68
    NSArray *_certificates;	// 112 = 0x70
    NSArray *_certificateRequests;	// 120 = 0x78
    NEIKEv2AuthPayload *_auth;	// 128 = 0x80
    NEIKEv2EAPPayload *_eap;	// 136 = 0x88
    NEIKEv2ConfigPayload *_config;	// 144 = 0x90
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;	// 152 = 0x98
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;	// 160 = 0xa0
    NSArray *_vendorIDs;	// 168 = 0xa8
}

+ (unsigned long long)exchangeType;	// IMP=0x00000000000e91e1
+ (id)copyTypeDescription;	// IMP=0x00000000000e91d4
+ (id)createIKEAuthResponse:(id)arg1 refusalError:(unsigned long long)arg2;	// IMP=0x00000000000c73e2
+ (id)createIKEAuthResponse:(id)arg1 ikeSA:(id)arg2 childSA:(id)arg3;	// IMP=0x00000000000c5e83
+ (id)createEAPForInitiatorIKESA:(id)arg1 childSA:(id)arg2 lastResponderPacket:(id)arg3;	// IMP=0x00000000000c35c4
+ (id)prepareDeviceIdentityNotifyPayload:(id)arg1 IMEISV:(id)arg2 lastResponderPacket:(id)arg3;	// IMP=0x00000000000c3369
+ (id)createIKEAuthForInitiatorIKESA:(id)arg1 childSA:(id)arg2;	// IMP=0x00000000000bfade
- (void).cxx_destruct;	// IMP=0x00000000000ea108
@property(retain) NSArray *vendorIDs; // @synthesize vendorIDs=_vendorIDs;
@property(retain) NEIKEv2ResponderTrafficSelectorPayload *tsr; // @synthesize tsr=_tsr;
@property(retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi; // @synthesize tsi=_tsi;
@property(retain) NEIKEv2ConfigPayload *config; // @synthesize config=_config;
@property(retain) NEIKEv2EAPPayload *eap; // @synthesize eap=_eap;
@property(retain) NEIKEv2AuthPayload *auth; // @synthesize auth=_auth;
@property(retain) NSArray *certificateRequests; // @synthesize certificateRequests=_certificateRequests;
@property(retain) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain) NEIKEv2ResponderIdentifierPayload *idr; // @synthesize idr=_idr;
@property(retain) NEIKEv2InitiatorIdentifierPayload *idi; // @synthesize idi=_idi;
@property(retain) NEIKEv2ChildSAPayload *sa; // @synthesize sa=_sa;
- (void)filloutPayloads;	// IMP=0x00000000000e96df
- (void)gatherPayloads;	// IMP=0x00000000000e91ec
- (id)validateEAPOnlyAuthentication:(id)arg1;	// IMP=0x00000000000c74cb
- (id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg1 childSA:(id)arg2;	// IMP=0x00000000000c4943
- (id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg1;	// IMP=0x00000000000c42bc
- (_Bool)validateAuthAsInitiator:(id)arg1 childSA:(id)arg2;	// IMP=0x00000000000c203f
- (_Bool)validateFirstAuthPayloadsForInitiator:(id)arg1 childSA:(id)arg2;	// IMP=0x00000000000c1481

@end

