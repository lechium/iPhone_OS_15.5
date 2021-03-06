//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID, TTSSchemaTTSSpeechCancelled, TTSSchemaTTSSpeechEnded, TTSSchemaTTSSpeechFailed, TTSSchemaTTSSpeechStarted;

@interface TTSSchemaTTSClientSpeechContext
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    TTSSchemaTTSSpeechStarted *_startedOrChanged;	// 16 = 0x10
    TTSSchemaTTSSpeechEnded *_ended;	// 24 = 0x18
    TTSSchemaTTSSpeechFailed *_failed;	// 32 = 0x20
    TTSSchemaTTSSpeechCancelled *_cancelled;	// 40 = 0x28
    _Bool _hasContextId;	// 48 = 0x30
    _Bool _hasStartedOrChanged;	// 49 = 0x31
    _Bool _hasEnded;	// 50 = 0x32
    _Bool _hasFailed;	// 51 = 0x33
    _Bool _hasCancelled;	// 52 = 0x34
    unsigned long long _whichContextevent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002f1b8a
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f17a2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002f16e4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002f129f
- (unsigned long long)hash;	// IMP=0x00000000002f11fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f0bf3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f09fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002efefd
- (void)deleteCancelled;	// IMP=0x00000000002efeca
@property(retain, nonatomic) TTSSchemaTTSSpeechCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteFailed;	// IMP=0x00000000002efdda
@property(retain, nonatomic) TTSSchemaTTSSpeechFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002efcea
@property(retain, nonatomic) TTSSchemaTTSSpeechEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002efbfa
@property(retain, nonatomic) TTSSchemaTTSSpeechStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteContextId;	// IMP=0x00000000002efb29
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035ccf4
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035ccbc

@end

