//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPAdminRequestRequestor, PDDPDate, PDDPStatus;

@interface PDDPAdminRequestDetails : PBCodable
{
    NSString *_adminNote;	// 8 = 0x8
    NSMutableArray *_adminRequestAccountIds;	// 16 = 0x10
    NSString *_adminRequestId;	// 24 = 0x18
    int _approvalStatus;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    PDDPDate *_dateCompleted;	// 48 = 0x30
    PDDPDate *_dateCreated;	// 56 = 0x38
    PDDPDate *_dateLastModified;	// 64 = 0x40
    unsigned int _options;	// 72 = 0x48
    NSString *_orgId;	// 80 = 0x50
    int _requestStatus;	// 88 = 0x58
    PDDPAdminRequestRequestor *_requestor;	// 96 = 0x60
    PDDPStatus *_status;	// 104 = 0x68
    int _type;	// 112 = 0x70
    struct {
        unsigned int approvalStatus:1;
        unsigned int options:1;
        unsigned int requestStatus:1;
        unsigned int type:1;
    } _has;	// 116 = 0x74
}

+ (Class)adminRequestAccountIdsType;	// IMP=0x0020000000039677
- (void).cxx_destruct;	// IMP=0x002000000003b4ee
@property(retain, nonatomic) NSString *adminNote; // @synthesize adminNote=_adminNote;
@property(retain, nonatomic) NSMutableArray *adminRequestAccountIds; // @synthesize adminRequestAccountIds=_adminRequestAccountIds;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) PDDPAdminRequestRequestor *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) PDDPDate *dateCompleted; // @synthesize dateCompleted=_dateCompleted;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSString *adminRequestId; // @synthesize adminRequestId=_adminRequestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003b00c
- (unsigned long long)hash;	// IMP=0x001000000003ae49
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003ab22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003a779
- (void)copyTo:(id)arg1;	// IMP=0x001000000003a51a
- (void)writeTo:(id)arg1;	// IMP=0x001000000003a251
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003a244
- (id)dictionaryRepresentation;	// IMP=0x001000000003974c
- (id)description;	// IMP=0x001000000003969d
@property(readonly, nonatomic) _Bool hasAdminNote;
- (id)adminRequestAccountIdsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003965a
- (unsigned long long)adminRequestAccountIdsCount;	// IMP=0x001000000003963d
- (void)addAdminRequestAccountIds:(id)arg1;	// IMP=0x00100000000395d3
- (void)clearAdminRequestAccountIds;	// IMP=0x00100000000395b6
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(nonatomic) _Bool hasOptions;
@property(readonly, nonatomic) _Bool hasRequestor;
- (int)StringAsApprovalStatus:(id)arg1;	// IMP=0x0010000000039478
- (id)approvalStatusAsString:(int)arg1;	// IMP=0x00100000000393eb
@property(nonatomic) _Bool hasApprovalStatus;
@property(nonatomic) int approvalStatus; // @synthesize approvalStatus=_approvalStatus;
- (int)StringAsRequestStatus:(id)arg1;	// IMP=0x00100000000392bc
- (id)requestStatusAsString:(int)arg1;	// IMP=0x0010000000039231
@property(nonatomic) _Bool hasRequestStatus;
// Error: Property attributes should begin with the type ('T') attribute, property name: requestStatus
// Property attributes: (null)

- (int)StringAsType:(id)arg1;	// IMP=0x00100000000390d8
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000039040
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasDateCompleted;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasOrgId;
@property(readonly, nonatomic) _Bool hasAdminRequestId;

@end

