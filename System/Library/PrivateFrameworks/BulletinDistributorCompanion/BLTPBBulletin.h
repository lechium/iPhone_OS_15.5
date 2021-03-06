//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAction, BLTPBCommunicationContext, BLTPBSectionIcon, NSData, NSMutableArray, NSString;

@interface BLTPBBulletin : PBCodable <NSCopying>
{
    double _date;	// 8 = 0x8
    double _publicationDate;	// 16 = 0x10
    double _requiredExpirationDate;	// 24 = 0x18
    double _soundAudioVolume;	// 32 = 0x20
    double _soundMaximumDuration;	// 40 = 0x28
    NSMutableArray *_additionalAttachments;	// 48 = 0x30
    NSData *_alertSuppressionContexts;	// 56 = 0x38
    NSData *_alertSuppressionContextsNulls;	// 64 = 0x40
    NSData *_attachment;	// 72 = 0x48
    NSString *_attachmentID;	// 80 = 0x50
    unsigned int _attachmentType;	// 88 = 0x58
    NSString *_attachmentURL;	// 96 = 0x60
    NSString *_bulletinID;	// 104 = 0x68
    NSString *_category;	// 112 = 0x70
    NSString *_categoryID;	// 120 = 0x78
    BLTPBCommunicationContext *_communicationContext;	// 128 = 0x80
    NSString *_contentType;	// 136 = 0x88
    NSData *_context;	// 144 = 0x90
    NSData *_contextNulls;	// 152 = 0x98
    BLTPBAction *_dismissAction;	// 160 = 0xa0
    NSString *_dismissalID;	// 168 = 0xa8
    unsigned int _feed;	// 176 = 0xb0
    NSString *_header;	// 184 = 0xb8
    BLTPBSectionIcon *_icon;	// 192 = 0xc0
    unsigned int _interruptionLevel;	// 200 = 0xc8
    NSString *_messageTitle;	// 208 = 0xd0
    NSMutableArray *_peopleIDs;	// 216 = 0xd8
    NSString *_publisherBulletinID;	// 224 = 0xe0
    NSString *_recordID;	// 232 = 0xe8
    NSString *_replyToken;	// 240 = 0xf0
    NSString *_sectionDisplayName;	// 248 = 0xf8
    NSString *_sectionID;	// 256 = 0x100
    int _sectionSubtype;	// 264 = 0x108
    BLTPBAction *_snoozeAction;	// 272 = 0x110
    NSString *_sockPuppetAppBundleID;	// 280 = 0x118
    NSString *_soundAccountIdentifier;	// 288 = 0x120
    int _soundAlertType;	// 296 = 0x128
    NSString *_soundToneIdentifier;	// 304 = 0x130
    NSMutableArray *_subsectionIDs;	// 312 = 0x138
    NSString *_subtitle;	// 320 = 0x140
    NSMutableArray *_supplementaryActions;	// 328 = 0x148
    NSString *_teamID;	// 336 = 0x150
    NSString *_threadID;	// 344 = 0x158
    NSString *_title;	// 352 = 0x160
    NSString *_universalSectionID;	// 360 = 0x168
    _Bool _containsUpdateIcon;	// 368 = 0x170
    _Bool _containsUpdatedAttachment;	// 369 = 0x171
    _Bool _hasCriticalIcon;	// 370 = 0x172
    _Bool _ignoresQuietMode;	// 371 = 0x173
    _Bool _includesSound;	// 372 = 0x174
    _Bool _loading;	// 373 = 0x175
    _Bool _preemptsPresentedAlert;	// 374 = 0x176
    _Bool _soundShouldIgnoreRingerSwitch;	// 375 = 0x177
    _Bool _soundShouldRepeat;	// 376 = 0x178
    _Bool _suppressDelayForForwardedBulletins;	// 377 = 0x179
    _Bool _turnsOnDisplay;	// 378 = 0x17a
    struct {
        unsigned int date:1;
        unsigned int publicationDate:1;
        unsigned int requiredExpirationDate:1;
        unsigned int soundAudioVolume:1;
        unsigned int soundMaximumDuration:1;
        unsigned int attachmentType:1;
        unsigned int interruptionLevel:1;
        unsigned int sectionSubtype:1;
        unsigned int soundAlertType:1;
        unsigned int containsUpdateIcon:1;
        unsigned int containsUpdatedAttachment:1;
        unsigned int hasCriticalIcon:1;
        unsigned int ignoresQuietMode:1;
        unsigned int loading:1;
        unsigned int preemptsPresentedAlert:1;
        unsigned int soundShouldIgnoreRingerSwitch:1;
        unsigned int soundShouldRepeat:1;
        unsigned int suppressDelayForForwardedBulletins:1;
        unsigned int turnsOnDisplay:1;
    } _has;	// 380 = 0x17c
}

+ (Class)additionalAttachmentsType;	// IMP=0x000000000000e4f8
+ (Class)peopleIDsType;	// IMP=0x000000000000e36e
+ (Class)subsectionIDsType;	// IMP=0x000000000000e272
+ (Class)supplementaryActionsType;	// IMP=0x000000000000de8b
+ (void)_addAttachmentsFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 attachOption:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007a8ee
+ (id)imageContentTypeForImageAttachment:(id)arg1;	// IMP=0x000000000007a7d9
+ (id)_handleThumbnailResponse:(id)arg1 attachmentMetadata:(id)arg2 transcodedAttachmentSaveURL:(id)arg3 wantsData:(_Bool)arg4 imageContentType:(id)arg5;	// IMP=0x000000000007a4de
+ (void)_attachmentFromBBAttachmentMetadata:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 fileOption:(unsigned long long)arg4 attachOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000079435
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 observer:(id)arg3 feed:(unsigned long long)arg4 teamID:(id)arg5 universalSectionID:(id)arg6 shouldUseExpirationDate:(_Bool)arg7 replyToken:(id)arg8 gizmoLegacyPublisherBulletinID:(id)arg9 gizmoLegacyCategoryID:(id)arg10 gizmoSectionID:(id)arg11 gizmoSectionSubtype:(id)arg12 useUserInfoForContext:(_Bool)arg13 removeSubtitleForOlderWatches:(_Bool)arg14 attachOption:(unsigned long long)arg15 completion:(CDUnknownBlockType)arg16;	// IMP=0x0000000000079111
+ (id)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 observer:(id)arg3 feed:(unsigned long long)arg4 teamID:(id)arg5 universalSectionID:(id)arg6 shouldUseExpirationDate:(_Bool)arg7 replyToken:(id)arg8 gizmoLegacyPublisherBulletinID:(id)arg9 gizmoLegacyCategoryID:(id)arg10 gizmoSectionID:(id)arg11 gizmoSectionSubtype:(id)arg12 useUserInfoForContext:(_Bool)arg13 removeSubtitleForOlderWatches:(_Bool)arg14;	// IMP=0x0000000000076d71
- (void).cxx_destruct;	// IMP=0x0000000000015626
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) BLTPBCommunicationContext *communicationContext; // @synthesize communicationContext=_communicationContext;
@property(nonatomic) unsigned int interruptionLevel; // @synthesize interruptionLevel=_interruptionLevel;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) _Bool containsUpdateIcon; // @synthesize containsUpdateIcon=_containsUpdateIcon;
@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool suppressDelayForForwardedBulletins; // @synthesize suppressDelayForForwardedBulletins=_suppressDelayForForwardedBulletins;
@property(nonatomic) _Bool preemptsPresentedAlert; // @synthesize preemptsPresentedAlert=_preemptsPresentedAlert;
@property(nonatomic) double soundAudioVolume; // @synthesize soundAudioVolume=_soundAudioVolume;
@property(nonatomic) _Bool hasCriticalIcon; // @synthesize hasCriticalIcon=_hasCriticalIcon;
@property(nonatomic) _Bool soundShouldIgnoreRingerSwitch; // @synthesize soundShouldIgnoreRingerSwitch=_soundShouldIgnoreRingerSwitch;
@property(nonatomic) _Bool soundShouldRepeat; // @synthesize soundShouldRepeat=_soundShouldRepeat;
@property(nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property(retain, nonatomic) NSString *replyToken; // @synthesize replyToken=_replyToken;
@property(nonatomic) double requiredExpirationDate; // @synthesize requiredExpirationDate=_requiredExpirationDate;
@property(retain, nonatomic) NSMutableArray *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(retain, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(retain, nonatomic) NSData *alertSuppressionContextsNulls; // @synthesize alertSuppressionContextsNulls=_alertSuppressionContextsNulls;
@property(retain, nonatomic) NSData *contextNulls; // @synthesize contextNulls=_contextNulls;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool ignoresQuietMode; // @synthesize ignoresQuietMode=_ignoresQuietMode;
@property(retain, nonatomic) NSMutableArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(retain, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(retain, nonatomic) NSMutableArray *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(nonatomic) _Bool turnsOnDisplay; // @synthesize turnsOnDisplay=_turnsOnDisplay;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool containsUpdatedAttachment; // @synthesize containsUpdatedAttachment=_containsUpdatedAttachment;
@property(nonatomic) unsigned int attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSString *soundToneIdentifier; // @synthesize soundToneIdentifier=_soundToneIdentifier;
@property(retain, nonatomic) NSString *soundAccountIdentifier; // @synthesize soundAccountIdentifier=_soundAccountIdentifier;
@property(nonatomic) int soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property(retain, nonatomic) NSData *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) _Bool includesSound; // @synthesize includesSound=_includesSound;
@property(nonatomic) double publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *sockPuppetAppBundleID; // @synthesize sockPuppetAppBundleID=_sockPuppetAppBundleID;
@property(nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(retain, nonatomic) BLTPBAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) BLTPBAction *snoozeAction; // @synthesize snoozeAction=_snoozeAction;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSMutableArray *supplementaryActions; // @synthesize supplementaryActions=_supplementaryActions;
@property(retain, nonatomic) NSData *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001448c
- (unsigned long long)hash;	// IMP=0x0000000000013847
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012c29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011f04
- (void)copyTo:(id)arg1;	// IMP=0x0000000000011630
- (void)writeTo:(id)arg1;	// IMP=0x0000000000010c29
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000010c1c
- (id)dictionaryRepresentation;	// IMP=0x000000000000e922
- (id)description;	// IMP=0x000000000000e873
@property(readonly, nonatomic) _Bool hasContentType;
@property(readonly, nonatomic) _Bool hasCommunicationContext;
@property(nonatomic) _Bool hasInterruptionLevel;
@property(readonly, nonatomic) _Bool hasHeader;
@property(nonatomic) _Bool hasContainsUpdateIcon;
@property(readonly, nonatomic) _Bool hasIcon;
@property(nonatomic) _Bool hasSuppressDelayForForwardedBulletins;
@property(nonatomic) _Bool hasPreemptsPresentedAlert;
@property(nonatomic) _Bool hasSoundAudioVolume;
@property(nonatomic) _Bool hasHasCriticalIcon;
@property(nonatomic) _Bool hasSoundShouldIgnoreRingerSwitch;
@property(nonatomic) _Bool hasSoundShouldRepeat;
@property(nonatomic) _Bool hasSoundMaximumDuration;
@property(readonly, nonatomic) _Bool hasReplyToken;
@property(nonatomic) _Bool hasRequiredExpirationDate;
- (id)additionalAttachmentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000e4db
- (unsigned long long)additionalAttachmentsCount;	// IMP=0x000000000000e4be
- (void)addAdditionalAttachments:(id)arg1;	// IMP=0x000000000000e454
- (void)clearAdditionalAttachments;	// IMP=0x000000000000e437
@property(readonly, nonatomic) _Bool hasAttachmentID;
@property(readonly, nonatomic) _Bool hasThreadID;
@property(readonly, nonatomic) _Bool hasAlertSuppressionContextsNulls;
@property(readonly, nonatomic) _Bool hasContextNulls;
@property(readonly, nonatomic) _Bool hasCategoryID;
@property(nonatomic) _Bool hasIgnoresQuietMode;
- (id)peopleIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000e351
- (unsigned long long)peopleIDsCount;	// IMP=0x000000000000e334
- (void)addPeopleIDs:(id)arg1;	// IMP=0x000000000000e2ca
- (void)clearPeopleIDs;	// IMP=0x000000000000e2ad
@property(readonly, nonatomic) _Bool hasAttachmentURL;
@property(readonly, nonatomic) _Bool hasDismissalID;
- (id)subsectionIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000e255
- (unsigned long long)subsectionIDsCount;	// IMP=0x000000000000e238
- (void)addSubsectionIDs:(id)arg1;	// IMP=0x000000000000e1ce
- (void)clearSubsectionIDs;	// IMP=0x000000000000e1b1
@property(nonatomic) _Bool hasTurnsOnDisplay;
@property(nonatomic) _Bool hasLoading;
@property(nonatomic) _Bool hasContainsUpdatedAttachment;
@property(nonatomic) _Bool hasAttachmentType;
@property(readonly, nonatomic) _Bool hasSoundToneIdentifier;
@property(readonly, nonatomic) _Bool hasSoundAccountIdentifier;
@property(nonatomic) _Bool hasSoundAlertType;
@property(readonly, nonatomic) _Bool hasAlertSuppressionContexts;
@property(readonly, nonatomic) _Bool hasUniversalSectionID;
@property(readonly, nonatomic) _Bool hasContext;
@property(readonly, nonatomic) _Bool hasTeamID;
@property(nonatomic) _Bool hasPublicationDate;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasSockPuppetAppBundleID;
@property(nonatomic) _Bool hasSectionSubtype;
@property(readonly, nonatomic) _Bool hasDismissAction;
@property(readonly, nonatomic) _Bool hasPublisherBulletinID;
@property(readonly, nonatomic) _Bool hasRecordID;
@property(readonly, nonatomic) _Bool hasSnoozeAction;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000de6e
- (unsigned long long)supplementaryActionsCount;	// IMP=0x000000000000de51
- (void)addSupplementaryActions:(id)arg1;	// IMP=0x000000000000dde7
- (void)clearSupplementaryActions;	// IMP=0x000000000000ddca
@property(readonly, nonatomic) _Bool hasAttachment;
@property(nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasMessageTitle;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasSectionDisplayName;
@property(readonly, nonatomic) _Bool hasSectionID;
@property(readonly, nonatomic) _Bool hasBulletinID;
- (id)description;	// IMP=0x000000000002c018
- (id)attachmentURLURL;	// IMP=0x0000000000079394
- (id)attachmentKey:(id)arg1;	// IMP=0x00000000000792b9
- (id)publisherMatchID;	// IMP=0x0000000000079270

@end

